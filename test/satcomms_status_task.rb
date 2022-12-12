# frozen_string_literal: true

using_task_library "satcomms_kvh"
import_types_from "satcomms_kvh"
import_types_from "base"

describe OroGen.satcomms_kvh.SatcommsStatusTask do
    run_live
    task = syskit_deploy(
        OroGen.satcomms_kvh.SatcommsStatusTask.deployed_as("satcomms_kvh_test")
    )
    task.properties.satcomms_website = "www.google.com"
    syskit_configure(task)
    syskit_start(task)
end

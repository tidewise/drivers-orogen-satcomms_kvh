/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "SatcommsStatusTask.hpp"

using namespace satcomms_kvh;

SatcommsStatusTask::SatcommsStatusTask(std::string const& name)
    : SatcommsStatusTaskBase(name)
{
}

SatcommsStatusTask::~SatcommsStatusTask()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See SatcommsStatusTask.hpp for more detailed
// documentation about them.

bool SatcommsStatusTask::configureHook()
{
    if (!SatcommsStatusTaskBase::configureHook())
        return false;

    manager.setURL(_url.get());
    manager.setTimeout(_timeout_miliseconds.get());
    return true;
}
bool SatcommsStatusTask::startHook()
{
    if (!SatcommsStatusTaskBase::startHook())
        return false;
    return true;
}
void SatcommsStatusTask::updateHook()
{
    SatcommsStatusTaskBase::updateHook();

    SatcommsStatus status = manager.getSatcommsStatus();
    _output.write(status);
}
void SatcommsStatusTask::errorHook()
{
    SatcommsStatusTaskBase::errorHook();
}
void SatcommsStatusTask::stopHook()
{
    SatcommsStatusTaskBase::stopHook();
}
void SatcommsStatusTask::cleanupHook()
{
    SatcommsStatusTaskBase::cleanupHook();
}

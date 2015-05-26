//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//   Version: 1.0.1
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UAP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn {

ref class OnboardingSignals;

public interface class IOnboardingSignals
{
    event Windows::Foundation::TypedEventHandler<OnboardingSignals^, OnboardingConnectionResultReceivedEventArgs^>^ ConnectionResultReceived;
};

public ref class OnboardingSignals sealed : [Windows::Foundation::Metadata::Default] IOnboardingSignals
{
public:
    // Calling this method will send the ConnectionResult signal to every member of the session.
    void ConnectionResult(_In_ OnboardingResult^ interfaceMemberResult);

    // This event fires whenever the ConnectionResult signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<OnboardingSignals^, OnboardingConnectionResultReceivedEventArgs^>^ ConnectionResultReceived;

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallConnectionResultReceived(_In_ OnboardingSignals^ sender, _In_ OnboardingConnectionResultReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    alljoyn_interfacedescription_member m_memberConnectionResult;
};

} } 

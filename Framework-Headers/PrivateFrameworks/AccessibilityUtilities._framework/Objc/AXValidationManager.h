//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol AXValidationReportingServices;

@interface AXValidationManager : NSObject
{
    BOOL _shouldLogToConsole;
    BOOL _shouldCrashOnError;
    BOOL _shouldReportToServer;
    BOOL _forceDoNotReport;
    BOOL _debugBuild;
    unsigned long long _numberOfValidationErrors;
    NSString *_validationTargetName;
    NSString *_overrideProcessName;
    NSMutableArray *_consoleErrorMessages;
    id<AXValidationReportingServices> _validationReportingServices;
}

@property (strong, nonatomic) NSMutableArray *consoleErrorMessages; // @synthesize consoleErrorMessages=_consoleErrorMessages;
@property (nonatomic, getter=isDebugBuild) BOOL debugBuild; // @synthesize debugBuild=_debugBuild;
@property (nonatomic) BOOL forceDoNotReport; // @synthesize forceDoNotReport=_forceDoNotReport;
@property (nonatomic) unsigned long long numberOfValidationErrors; // @synthesize numberOfValidationErrors=_numberOfValidationErrors;
@property (copy, nonatomic) NSString *overrideProcessName; // @synthesize overrideProcessName=_overrideProcessName;
@property (nonatomic) BOOL shouldCrashOnError; // @synthesize shouldCrashOnError=_shouldCrashOnError;
@property (nonatomic) BOOL shouldLogToConsole; // @synthesize shouldLogToConsole=_shouldLogToConsole;
@property (nonatomic) BOOL shouldReportToServer; // @synthesize shouldReportToServer=_shouldReportToServer;
@property (strong, nonatomic) id<AXValidationReportingServices> validationReportingServices; // @synthesize validationReportingServices=_validationReportingServices;
@property (copy, nonatomic) NSString *validationTargetName; // @synthesize validationTargetName=_validationTargetName;

+ (id)sharedInstance;
- (BOOL)_client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(char *)arg4 argList:(struct __va_list_tag [1])arg5;
- (BOOL)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4;
- (BOOL)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 returnType:(id)arg5 arguments:(id)arg6;
- (void)_printConsoleReport:(BOOL)arg1 isDelayed:(BOOL)arg2;
- (BOOL)client:(id)arg1 validateClass:(id)arg2;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 conformsToProtocol:(id)arg3;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(char *)arg4;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(char *)arg4;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(char *)arg4 argList:(struct __va_list_tag [1])arg5;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 withType:(char *)arg4;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 withType:(char *)arg4;
- (BOOL)client:(id)arg1 validateClass:(id)arg2 isKindOfClass:(id)arg3;
- (BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasMethod:(id)arg3 isInstanceMethod:(BOOL)arg4 isRequired:(BOOL)arg5;
- (BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalClassMethod:(id)arg3;
- (BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalInstanceMethod:(id)arg3;
- (BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasProperty:(id)arg3;
- (BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredClassMethod:(id)arg3;
- (BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredInstanceMethod:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)installSafeCategories:(CDUnknownBlockType)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4;
- (void)installSafeCategories:(CDUnknownBlockType)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4 forceDoNotReport:(BOOL)arg5;
- (BOOL)installSafeCategory:(id)arg1;
- (BOOL)installSafeCategory:(id)arg1 canInteractWithTargetClass:(BOOL)arg2;
- (void)performValidations:(CDUnknownBlockType)arg1 withPreValidationHandler:(CDUnknownBlockType)arg2 postValidationHandler:(CDUnknownBlockType)arg3;
- (void)performValidations:(CDUnknownBlockType)arg1 withPreValidationHandler:(CDUnknownBlockType)arg2 postValidationHandler:(CDUnknownBlockType)arg3 safeCategoryInstallationHandler:(CDUnknownBlockType)arg4;
- (void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidationSuccessForProcessName:(id)arg1;
- (BOOL)validateClass:(id)arg1;
- (BOOL)validateClass:(id)arg1 conformsToProtocol:(id)arg2;
- (BOOL)validateClass:(id)arg1 hasClassMethod:(id)arg2;
- (BOOL)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(char *)arg3;
- (BOOL)validateClass:(id)arg1 hasInstanceMethod:(id)arg2;
- (BOOL)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(char *)arg3;
- (BOOL)validateClass:(id)arg1 hasInstanceVariable:(id)arg2;
- (BOOL)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(char *)arg3;
- (BOOL)validateClass:(id)arg1 hasProperty:(id)arg2;
- (BOOL)validateClass:(id)arg1 hasProperty:(id)arg2 withType:(char *)arg3;
- (BOOL)validateClass:(id)arg1 isKindOfClass:(id)arg2;
- (BOOL)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(BOOL)arg3 isRequired:(BOOL)arg4;
- (BOOL)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2;
- (BOOL)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2;
- (BOOL)validateProtocol:(id)arg1 hasProperty:(id)arg2;
- (BOOL)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2;
- (BOOL)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2;

@end


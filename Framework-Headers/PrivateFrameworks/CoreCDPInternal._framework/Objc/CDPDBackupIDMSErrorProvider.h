//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/CDPDBackupErrorProviderImpl.h>

@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl
{
}

- (id)cooldownErrorWithUnderlyingError:(id)arg1;
- (id)globalHardLimitError;
- (id)globalHardLimitErrorWithRecord:(id)arg1;
- (void)handleHardLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSoftLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)hardLimitErrorForRecord:(id)arg1;
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
- (BOOL)supportsErrorPresentation;

@end


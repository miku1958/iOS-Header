//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SUDownloadPolicyFactory : NSObject
{
}

+ (id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4;
+ (id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2;
+ (int)downloadPolicyTypeForClass:(id)arg1;
+ (id)userDownloadPolicyForDescriptor:(id)arg1;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 allowCellularOverride:(BOOL)arg3;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4;

@end


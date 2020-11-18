//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBLaunchdInterfacing-Protocol.h>

@class NSString;

@interface RBLaunchdInterface : NSObject <RBLaunchdInterfacing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
- (id)copyJobWithLabel:(id)arg1 domain:(id)arg2;
- (id)copyJobWithPid:(int)arg1;
- (id)copyJobsManagedBy:(id)arg1 error:(out id *)arg2;
- (id)currentDomain;
- (id)domainForPid:(int)arg1;
- (id)domainForUser:(unsigned int)arg1;
- (id)forJob:(id)arg1 createInstance:(unsigned char [16])arg2 error:(out id *)arg3;
- (id)jobWithPlist:(id)arg1;
- (id)jobWithPlist:(id)arg1 domain:(id)arg2;
- (id)propertiesForJob:(id)arg1 error:(out id *)arg2;
- (id)propertiesForPid:(int)arg1 error:(out id *)arg2;
- (id)submitExtension:(id)arg1 overlay:(id)arg2 domain:(id)arg3 error:(out id *)arg4;

@end

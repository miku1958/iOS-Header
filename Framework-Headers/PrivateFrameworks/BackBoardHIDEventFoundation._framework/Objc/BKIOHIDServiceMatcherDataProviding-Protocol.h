//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardHIDEventFoundation/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol BKIOHIDServiceMatcherDataProviding <NSObject>
- (NSArray *)IOHIDServicesMatching:(NSDictionary *)arg1;
- (void)registerIOHIDServicesCallback:(CDUnknownFunctionPointerType)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void *)arg3 refCon:(void *)arg4;
- (void)unregisterIOHIDServicesCallback:(CDUnknownFunctionPointerType)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void *)arg3 refCon:(void *)arg4;
@end


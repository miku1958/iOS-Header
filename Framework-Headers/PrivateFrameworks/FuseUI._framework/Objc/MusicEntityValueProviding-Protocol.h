//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/IKEntityValueProviding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@protocol MusicEntityValueProviding <IKEntityValueProviding>
- (id)valueForEntityProperty:(NSString *)arg1;
- (NSDictionary *)valuesForEntityProperties:(NSSet *)arg1;

@optional
+ (BOOL)supportsConcurrentLoadingOfEntityProperties;
@end


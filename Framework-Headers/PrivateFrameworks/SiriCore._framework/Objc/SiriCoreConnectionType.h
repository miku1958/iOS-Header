//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreConnectionType : NSObject
{
    long long _technology;
}

- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (id)description;
- (long long)diagnosticConnectionType;
- (id)initWithTechnology:(long long)arg1;
- (BOOL)isEdge;
- (BOOL)isWWAN;
- (long long)technology;

@end


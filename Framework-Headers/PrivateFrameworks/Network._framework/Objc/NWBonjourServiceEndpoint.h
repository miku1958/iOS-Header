//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint
{
}

@property (readonly) NSString *domain;
@property (readonly) NSString *name;
@property (readonly) NSString *type;

+ (id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;

@end


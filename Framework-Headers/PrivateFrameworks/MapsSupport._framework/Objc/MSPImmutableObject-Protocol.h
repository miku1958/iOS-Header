//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPIdentifiable-Protocol.h>
#import <MapsSupport/NSMutableCopying-Protocol.h>

@class Protocol;

@protocol MSPImmutableObject <MSPIdentifiable, NSMutableCopying>
+ (Class)mutableObjectClass;
+ (Protocol *)mutableObjectProtocol;
- (id)mutableCopy;
@end


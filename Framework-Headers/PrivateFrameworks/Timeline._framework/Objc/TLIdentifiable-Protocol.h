//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Timeline/NSCopying-Protocol.h>
#import <Timeline/NSObject-Protocol.h>
#import <Timeline/NSSecureCoding-Protocol.h>

@protocol TLIdentifiable;

@protocol TLIdentifiable <NSSecureCoding, NSObject, NSCopying>
- (BOOL)tl_isEqualToIdentifiable:(id<TLIdentifiable>)arg1;
@end

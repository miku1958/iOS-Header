//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface BBSectionFilter : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _enabled;
    NSString *_displayName;
    NSString *_filterID;
}

@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;

@end

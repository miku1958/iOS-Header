//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBAction, BBImage, NSData, NSString;

@interface BBButton : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    BBImage *_image;
    BBAction *_action;
    NSString *_identifier;
}

@property (copy, nonatomic) BBAction *action; // @synthesize action=_action;
@property (readonly, copy, nonatomic) NSData *glyphData;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) BBImage *image; // @synthesize image=_image;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3;
+ (id)buttonWithTitle:(id)arg1 glyphData:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end


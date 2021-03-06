//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPContactEntity, NSArray, NSString, UIImage;

@interface CPContact : NSObject <NSSecureCoding>
{
    CPContactEntity *_contactEntity;
}

@property (copy, nonatomic) NSArray *actions; // @dynamic actions;
@property (strong, nonatomic) CPContactEntity *contactEntity; // @synthesize contactEntity=_contactEntity;
@property (strong, nonatomic) UIImage *image; // @dynamic image;
@property (copy, nonatomic) NSString *informativeText; // @dynamic informativeText;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (copy, nonatomic) NSString *subtitle; // @dynamic subtitle;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 image:(id)arg2;

@end


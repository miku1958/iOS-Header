//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DrawingKit/NSCopying-Protocol.h>
#import <DrawingKit/NSSecureCoding-Protocol.h>

@class DKDrawing, NSDate, NSUUID;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
    NSDate *_creationDate;
    DKDrawing *_drawing;
}

@property (strong) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong) DKDrawing *drawing; // @synthesize drawing=_drawing;
@property (strong) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrawing:(id)arg1;

@end

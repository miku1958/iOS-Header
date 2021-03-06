//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_detail;
}

@property (readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 detail:(id)arg2;

@end


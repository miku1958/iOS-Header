//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CRSIconLayoutPage : NSObject <NSSecureCoding>
{
    NSArray *_icons;
}

@property (readonly, nonatomic) NSArray *icons; // @synthesize icons=_icons;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIcons:(id)arg1;

@end

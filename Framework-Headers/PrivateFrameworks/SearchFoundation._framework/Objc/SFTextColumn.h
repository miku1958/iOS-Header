//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SFTextColumn : NSObject <NSSecureCoding>
{
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

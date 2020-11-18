//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@class NSString;

@interface RBSTagAttribute : RBSAttribute
{
    NSString *_tag;
}

@property (readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;

+ (id)attributeWithTag:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

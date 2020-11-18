//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSObject-Protocol.h>

@protocol UIKBRenderEffect <NSObject, NSCopying>

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) SEL renderSelector;
@property (readonly, nonatomic) BOOL renderUnder;
@property (nonatomic) double weight;

- (struct CGColor *)CGColor;
@end


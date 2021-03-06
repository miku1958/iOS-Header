//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSSecureCoding-Protocol.h>
#import <SpringBoardServices/SBSStatusBarTapContext-Protocol.h>

@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext>
{
    int _styleOverride;
}

@property (nonatomic) int styleOverride; // @synthesize styleOverride=_styleOverride;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleOverride:(int)arg1;

@end


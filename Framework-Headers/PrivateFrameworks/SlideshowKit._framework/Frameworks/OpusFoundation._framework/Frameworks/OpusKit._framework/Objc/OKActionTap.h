//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKAction.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionTapExports-Protocol.h>

@interface OKActionTap : OKAction <OKActionTapExports, NSSecureCoding>
{
    unsigned long long _tapCount;
}

@property (nonatomic) unsigned long long tapCount; // @synthesize tapCount=_tapCount;

+ (void)setupJavascriptContext:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)tapActionWithLocation:(struct CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

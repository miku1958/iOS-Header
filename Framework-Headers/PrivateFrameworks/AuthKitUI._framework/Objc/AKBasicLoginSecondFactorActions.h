//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/NSCopying-Protocol.h>

@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying>
{
    CDUnknownBlockType _regenerateCodeAction;
    CDUnknownBlockType _codeEnteredAction;
    CDUnknownBlockType _ak_cancelAction;
}

@property (copy, nonatomic) CDUnknownBlockType ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
@property (copy, nonatomic) CDUnknownBlockType codeEnteredAction; // @synthesize codeEnteredAction=_codeEnteredAction;
@property (copy, nonatomic) CDUnknownBlockType regenerateCodeAction; // @synthesize regenerateCodeAction=_regenerateCodeAction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


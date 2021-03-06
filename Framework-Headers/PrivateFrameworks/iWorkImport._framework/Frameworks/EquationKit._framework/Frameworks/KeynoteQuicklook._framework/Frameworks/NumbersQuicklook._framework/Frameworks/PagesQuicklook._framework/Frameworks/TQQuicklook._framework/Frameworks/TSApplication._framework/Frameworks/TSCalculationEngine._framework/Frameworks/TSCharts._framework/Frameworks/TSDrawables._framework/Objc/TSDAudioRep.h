//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDMediaRep.h>

@class TSDMovieInfo;

@interface TSDAudioRep : TSDMediaRep
{
}

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;

- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)willBeRemoved;

@end


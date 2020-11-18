//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUICore/GKImageBrush.h>

#import <GameCenterUICore/GKBrushIdentification-Protocol.h>

@class NSString;

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification>
{
    struct CGSize _sizeOverride;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize sizeOverride; // @synthesize sizeOverride=_sizeOverride;
@property (readonly) Class superclass;

- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)renderedImageIdentifier;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUICore/NSCopying-Protocol.h>

@interface GKBrush : NSObject <NSCopying>
{
}

+ (id)brush;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)drawnImageForSize:(struct CGSize)arg1 opaque:(BOOL)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;

@end


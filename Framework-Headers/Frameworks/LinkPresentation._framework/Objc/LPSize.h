//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPSize : NSObject <NSCopying>
{
    LPPointUnit *_width;
    LPPointUnit *_height;
}

@property (readonly, nonatomic) struct CGSize asSize;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, strong, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property (readonly, strong, nonatomic) LPPointUnit *width; // @synthesize width=_width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSquarePoints:(id)arg1;
- (id)initWithSquareSize:(double)arg1;

@end


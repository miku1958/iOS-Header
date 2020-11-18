//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUICardViewLayoutRecord : NSObject <NSCopying>
{
    long long _layoutType;
    long long _gridStyle;
    long long _gridType;
}

@property (nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property (nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property (nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end


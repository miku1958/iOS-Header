//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDTileGeometryProviding-Protocol.h>

@class NSString;

@interface TSWPRepTileGeometry : NSObject <TSDTileGeometryProviding>
{
    struct vector<TSWPRepBoundsAnalyzer::Info, std::__1::allocator<TSWPRepBoundsAnalyzer::Info>> _infos;
    BOOL _tileGeometryDirty;
    struct CGSize _maxTileSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize maxTileSize; // @synthesize maxTileSize=_maxTileSize;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tileGeometryDirty; // @synthesize tileGeometryDirty=_tileGeometryDirty;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tileGeometryAddVisibileIndices:(id)arg1 withLayer:(id)arg2 visibleBounds:(struct CGRect)arg3;
- (void)tileGeometryConfigureWithLayer:(id)arg1 tileLayer:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)tileGeometryCountWithLayer:(id)arg1;
- (struct CGRect)tileGeometryRectWithLayer:(id)arg1 atIndex:(unsigned long long)arg2 mask:(unsigned int *)arg3;
- (BOOL)updateWithLayer:(id)arg1 scale:(double)arg2 columns:(id)arg3;

@end


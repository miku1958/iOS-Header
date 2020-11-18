//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <VectorKit/LabelManagerDelegate-Protocol.h>
#import <VectorKit/VKStyleManagerObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MDCLabelNotifier : NSObject <GEOResourceManifestTileGroupObserver, VKStyleManagerObserver, LabelManagerDelegate>
{
    struct CLabelLayer *_layer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) shared_ptr_a3c46825 styleManager;
@property (readonly) Class superclass;

+ (BOOL)reloadOnStylesheetChange;
- (id)initWithLayer:(struct CLabelLayer *)arg1;
- (void)labelManager:(struct LabelManager *)arg1 labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)labelManager:(struct LabelManager *)arg1 pendingArtworkIsReady:(BOOL)arg2;
- (void)labelManager:(struct LabelManager *)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)labelManager:(struct LabelManager *)arg1 setNeedsDisplay:(BOOL)arg2;
- (void)labelManager:(struct LabelManager *)arg1 setNeedsLayout:(BOOL)arg2;
- (void)labelManagerDidLayout:(struct LabelManager *)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end


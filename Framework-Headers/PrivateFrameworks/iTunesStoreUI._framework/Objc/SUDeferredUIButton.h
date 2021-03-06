//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <iTunesStoreUI/SUDeferredUIView-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView>
{
    BOOL _deferredEnabled;
    struct CGRect _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    BOOL _isDeferringInterfaceUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (void)_saveImagesAsDeferred;
- (void)_saveTitlesAsDeferred;
- (void)dealloc;
- (struct CGRect)frame;
- (id)imageForState:(unsigned long long)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleForState:(unsigned long long)arg1;

@end


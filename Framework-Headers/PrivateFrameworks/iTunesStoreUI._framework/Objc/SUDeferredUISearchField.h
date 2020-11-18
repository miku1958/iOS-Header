//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISearchField.h>

#import <iTunesStoreUI/SUDeferredUIView-Protocol.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView>
{
    long long _deferredClearButtonMode;
    id _deferredFont;
    struct CGRect _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    BOOL _isDeferringInterfaceUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (long long)clearButtonMode;
- (void)dealloc;
- (id)font;
- (struct CGRect)frame;
- (float)paddingLeft;
- (float)paddingTop;
- (id)placeholder;
- (void)setClearButtonMode:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end


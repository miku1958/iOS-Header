//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NumbersQuicklook/NSCopying-Protocol.h>

@class TSKSelectionPath;

@interface TNSheetUIState : NSObject <NSCopying>
{
    BOOL _hasVisibleRect;
    BOOL _hasPreviousVisibleRect;
    float _viewScale;
    float _previousViewScale;
    long long _archivedDeviceIdiom;
    TSKSelectionPath *_selectionPath;
    struct CGRect _visibleRect;
    struct CGRect _previousVisibleRect;
}

@property (nonatomic) long long archivedDeviceIdiom; // @synthesize archivedDeviceIdiom=_archivedDeviceIdiom;
@property (nonatomic) BOOL hasPreviousVisibleRect; // @synthesize hasPreviousVisibleRect=_hasPreviousVisibleRect;
@property (nonatomic) BOOL hasVisibleRect; // @synthesize hasVisibleRect=_hasVisibleRect;
@property (readonly, nonatomic) struct CGPoint previousScrollPosition;
@property (nonatomic) float previousViewScale; // @synthesize previousViewScale=_previousViewScale;
@property (nonatomic) struct CGRect previousVisibleRect; // @synthesize previousVisibleRect=_previousVisibleRect;
@property (readonly, nonatomic) struct CGPoint scrollPosition;
@property (strong, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property (nonatomic) float viewScale; // @synthesize viewScale=_viewScale;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;

+ (long long)currentDeviceIdiom;
- (void).cxx_destruct;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithArchive:(const struct SheetUIStateArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)p_persistableSelectionPathFromSelectionPath:(id)arg1;
- (void)saveToArchive:(struct SheetUIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)saveToArchive:(struct SheetUIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3 targetVersion:(unsigned long long)arg4;
- (void)updateForCurrentDeviceIdiomIfNecessaryWithDefaultViewScale:(float)arg1;

@end


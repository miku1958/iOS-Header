//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TPArchivedLayoutState, TPArchivedViewState;

__attribute__((visibility("hidden")))
@interface TPArchivedUIState : TSPObject
{
    TPArchivedLayoutState *_layoutState;
    TPArchivedViewState *_viewState;
}

@property (strong, nonatomic) TPArchivedLayoutState *layoutState;
@property (readonly, nonatomic) TPArchivedViewState *viewState; // @synthesize viewState=_viewState;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDPreviewAction.h>

#import <DataDetectorsUI/DDParsecCollectionDelegate-Protocol.h>

@class DDParsecCollectionViewController;

__attribute__((visibility("hidden")))
@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate>
{
    DDParsecCollectionViewController *_parsecViewController;
    BOOL _previewMode;
}

- (void).cxx_destruct;
- (id)createViewController;
- (void)dismissParsecCollection:(id)arg1;
- (int)interactionType;
- (id)localizedName;

@end


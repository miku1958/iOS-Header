//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAlbumGadget.h>

@class PXPeopleAlbumProvider;

__attribute__((visibility("hidden")))
@interface PUPeopleAlbumGadget : PUAlbumGadget
{
    PXPeopleAlbumProvider *_albumProvider;
}

@property (strong, nonatomic) PXPeopleAlbumProvider *albumProvider; // @synthesize albumProvider=_albumProvider;

- (void).cxx_destruct;
- (void)_configureSubtitleForAlbumListCellContentView:(id)arg1;
- (void)_peopleAlbumChanged:(id)arg1;
- (void)_setSubtitleForPeopleCount:(long long)arg1 onAlbumListCellContentView:(id)arg2;
- (id)albumListCellContentView;
- (void)contentViewWillAppear;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (void)reconfigure;
- (id)title;

@end


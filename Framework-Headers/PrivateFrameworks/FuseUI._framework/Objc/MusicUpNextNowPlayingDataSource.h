//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicUpNextCompositeDataSource.h>

@class MPUAVPlayer, MusicEntityViewHorizontalLockupContentDescriptor;
@protocol MusicUpNextCompositeDataSourceDelegate;

@interface MusicUpNextNowPlayingDataSource : MusicUpNextCompositeDataSource
{
    BOOL _hidesViews;
    MPUAVPlayer *_player;
    id<MusicUpNextCompositeDataSourceDelegate> _delegate;
    MusicEntityViewHorizontalLockupContentDescriptor *_horizontalLockupContentDescriptor;
}

@property (nonatomic) BOOL hidesViews; // @synthesize hidesViews=_hidesViews;

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)delegate;
- (id)horizontalLockupContentDescriptor;
- (id)indexPathForEntityValueContext:(id)arg1;
- (void)invalidateSizes;
- (BOOL)isNowPlayingDataSource;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)setPlayer:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;
- (id)tableViewHeaderReusueIdentifier;
- (id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2;

@end


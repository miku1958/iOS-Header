//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@protocol MPMutableIdentifierListSection;

@protocol MPSectionedIdentifierListDataSource <NSObject>
- (void)reloadSection:(id<MPMutableIdentifierListSection>)arg1 completion:(void (^)(NSError *))arg2;
@end

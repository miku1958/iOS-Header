//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PagesQuicklook/NSObject-Protocol.h>

@class TPSectionHint, _TtC14PagesQuicklook17TPPaginationState;

@protocol TPPageGenerator <NSObject>
- (void)createOrUpdatePageHintInSectionHint:(TPSectionHint *)arg1 withState:(_TtC14PagesQuicklook17TPPaginationState *)arg2;
- (BOOL)wantsPageInSectionHint:(TPSectionHint *)arg1 withState:(_TtC14PagesQuicklook17TPPaginationState *)arg2;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/UITableViewDelegate-Protocol.h>

@class AAFamilyMember, AAUIProfilePictureStore, NSString, UITableView;
@protocol UITableViewDelegate;

@interface FAFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate>
{
    NSObject<UITableViewDelegate> *_remoteTableViewController;
    UITableView *_remoteTableView;
    AAFamilyMember *_familyMember;
    AAUIProfilePictureStore *_pictureStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithPage:(id)arg1 forPerson:(id)arg2 account:(id)arg3 store:(id)arg4;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <SearchUI/UINavigationControllerDelegate-Protocol.h>

@class NSString;

@interface SearchUITestNavigationController : UINavigationController <UINavigationControllerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didSelectRowAtIndexPath:(id)arg1;
- (id)initWithResults:(id)arg1 style:(unsigned long long)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)selectRowAtIndexPath:(id)arg1;
- (void)showTableView;
- (id)tableViewController;

@end

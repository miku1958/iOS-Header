//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class NSDictionary, NSIndexPath, NSString, NSURL, RUIElement, RUIObjectModel, RUIPage, RUITableView, RUITableViewRow, RUITableViewSection, UINavigationController, UIView, UIViewController;

@protocol RUIObjectModelDelegate <NSObject>
- (UINavigationController *)parentViewControllerForObjectModel:(RUIObjectModel *)arg1;

@optional
- (void)objectModel:(RUIObjectModel *)arg1 configureTableRow:(RUITableViewRow *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 configureTableSection:(RUITableViewSection *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 configureTableView:(RUITableView *)arg2 page:(RUIPage *)arg3;
- (Class)objectModel:(RUIObjectModel *)arg1 customFooterClassForSection:(RUITableViewSection *)arg2;
- (Class)objectModel:(RUIObjectModel *)arg1 customHeaderClassForSection:(RUITableViewSection *)arg2;
- (Class)objectModel:(RUIObjectModel *)arg1 customTableCellClassForTableViewRow:(RUITableViewRow *)arg2;
- (void)objectModel:(RUIObjectModel *)arg1 didNavigateBackFromController:(UIViewController *)arg2 withGesture:(BOOL)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 elementDidChange:(RUIElement *)arg2;
- (BOOL)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 deletedTableRow:(RUITableViewRow *)arg3 atIndexPath:(NSIndexPath *)arg4 withName:(NSString *)arg5;
- (BOOL)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 deletedTableRow:(RUITableViewRow *)arg3 atIndexPath:(NSIndexPath *)arg4 withURL:(NSURL *)arg5 httpMethod:(NSString *)arg6;
- (void)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 toggledEditing:(BOOL)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 pressedButton:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 pressedLink:(NSURL *)arg2 httpMethod:(NSString *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 pressedLink:(NSURL *)arg2 httpMethod:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (BOOL)objectModel:(RUIObjectModel *)arg1 shouldDisplayNamedElement:(RUIElement *)arg2 page:(RUIPage *)arg3;
- (BOOL)objectModel:(RUIObjectModel *)arg1 shouldShowModalHTMLViewWithURL:(NSURL *)arg2;
- (UIView *)objectModel:(RUIObjectModel *)arg1 tableFooterViewForAttributes:(NSDictionary *)arg2 page:(RUIPage *)arg3;
- (UIView *)objectModel:(RUIObjectModel *)arg1 tableHeaderViewForAttributes:(NSDictionary *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 willLoadLinkURL:(NSURL *)arg2 attributes:(NSDictionary *)arg3;
- (void)objectModelDidChange:(RUIObjectModel *)arg1;
- (void)objectModelPressedBack:(RUIObjectModel *)arg1;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2;
- (UIViewController *)viewControllerForAlertPresentation;
@end


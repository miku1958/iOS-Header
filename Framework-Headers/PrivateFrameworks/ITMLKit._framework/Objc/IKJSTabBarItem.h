//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSTabBarItem-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKJSNavigationDocument, IKJSTabBar, JSManagedValue, NSString;
@protocol IKAppNavigationController;

@interface IKJSTabBarItem : IKJSObject <IKJSTabBarItem, JSExport>
{
    id<IKAppNavigationController> _navigationControllerDelegate;
    NSString *_identifier;
    NSString *_rootURL;
    IKJSNavigationDocument *_navigationDocument;
    JSManagedValue *_managedNavigationDocument;
    JSManagedValue *_managedSelf;
    IKJSTabBar *_owner;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) JSManagedValue *managedNavigationDocument; // @synthesize managedNavigationDocument=_managedNavigationDocument;
@property (strong, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property (readonly, weak, nonatomic) id<IKAppNavigationController> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
@property (readonly, nonatomic) IKJSNavigationDocument *navigationDocument; // @synthesize navigationDocument=_navigationDocument;
@property (weak, nonatomic) IKJSTabBar *owner; // @synthesize owner=_owner;
@property (readonly, nonatomic) NSString *rootURL; // @synthesize rootURL=_rootURL;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 identifier:(id)arg2 rootURL:(id)arg3 navigationController:(id)arg4 owner:(id)arg5;

@end


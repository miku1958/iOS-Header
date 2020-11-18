//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSNavigationDocument-Protocol.h>

@class NSArray;
@protocol IKAppNavigationController;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument>
{
    id<IKAppNavigationController> _navigationControllerDelegate;
}

@property (readonly, strong, nonatomic) NSArray *documents;
@property (readonly, weak, nonatomic) id<IKAppNavigationController> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;

- (void).cxx_destruct;
- (id)_makeAppDocumentWithDocument:(id)arg1;
- (void)clear;
- (void)dismissModal;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2;
- (void)insertBeforeDocument:(id)arg1:(id)arg2:(id)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)presentModal:(id)arg1:(id)arg2;
- (void)pushDocument:(id)arg1:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1:(id)arg2:(id)arg3;

@end

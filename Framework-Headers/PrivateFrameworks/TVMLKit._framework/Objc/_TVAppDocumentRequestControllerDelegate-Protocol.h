//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVAppDocumentControllerDelegate-Protocol.h>

@class NSDictionary, _TVAppDocumentController;

@protocol _TVAppDocumentRequestControllerDelegate <_TVAppDocumentControllerDelegate>

@optional
- (void)appDocumentController:(_TVAppDocumentController *)arg1 didCompleteDocumentCreationWithStatus:(long long)arg2 errorDictionary:(NSDictionary *)arg3;
- (void)appDocumentController:(_TVAppDocumentController *)arg1 didHideUI:(BOOL)arg2;
- (void)selectedMediaInfoDidChangeForAppDocumentController:(_TVAppDocumentController *)arg1;
- (void)showcaseFactorDidChangeForAppDocumentController:(_TVAppDocumentController *)arg1;
@end


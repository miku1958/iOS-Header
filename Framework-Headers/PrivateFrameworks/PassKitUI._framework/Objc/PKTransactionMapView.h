//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/MKMapViewDelegate-Protocol.h>

@class MKMapView, NSString, PKPaymentTransaction;

@interface PKTransactionMapView : UIView <MKMapViewDelegate>
{
    MKMapView *_internalMapView;
    struct CGRect _lastLaidBounds;
    BOOL _showsMerchantName;
    BOOL _usesDarkAppearance;
    PKPaymentTransaction *_transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL showsMerchantName; // @synthesize showsMerchantName=_showsMerchantName;
@property (readonly) Class superclass;
@property (strong, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property (nonatomic) BOOL usesDarkAppearance; // @synthesize usesDarkAppearance=_usesDarkAppearance;

- (void).cxx_destruct;
- (id)_annotationsForTransaction:(id)arg1;
- (void)_centerOnTransactionAnimated:(BOOL)arg1;
- (CDStruct_90e2a262)_mapRectForTransaction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/AKAppleIDServerUIFieldExtractor-Protocol.h>

@class NSString, RUIObjectModel;

@interface AKAppleIDObjectModelFieldExtractor : NSObject <AKAppleIDServerUIFieldExtractor>
{
    RUIObjectModel *_objectModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_valueForFieldWithID:(id)arg1 inObjectModel:(id)arg2;
- (id)_valueForTextFieldFromPage:(id)arg1 rowID:(id)arg2;
- (id)initWithObjectModel:(id)arg1;
- (id)valueForFieldWithID:(id)arg1;

@end


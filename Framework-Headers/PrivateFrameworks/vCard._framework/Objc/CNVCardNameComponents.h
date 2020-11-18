//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardNameDataSource-Protocol.h>

@class NSString;

@interface CNVCardNameComponents : NSObject <CNVCardNameDataSource>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_title;
    NSString *_suffix;
    NSString *_companyName;
    BOOL _isCompany;
}

@property (readonly) NSString *companyName; // @synthesize companyName=_companyName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *firstName; // @synthesize firstName=_firstName;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isCompany; // @synthesize isCompany=_isCompany;
@property (readonly) NSString *lastName; // @synthesize lastName=_lastName;
@property (readonly) NSString *middleName; // @synthesize middleName=_middleName;
@property (readonly) NSString *suffix; // @synthesize suffix=_suffix;
@property (readonly) Class superclass;
@property (readonly) NSString *title; // @synthesize title=_title;

+ (id)components;
+ (id)componentsWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 title:(id)arg4 suffix:(id)arg5 companyName:(id)arg6 isCompany:(BOOL)arg7;

@end


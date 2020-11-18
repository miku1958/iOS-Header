//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASChangedCollectionLeaf.h>

#import <DAEAS/DADataElement-Protocol.h>

@class NSArray, NSDate, NSString;

@interface ASContact : ASChangedCollectionLeaf <DADataElement>
{
    BOOL _bodyTruncated;
    int _bodySize;
    void *_abRecord;
    NSDate *_anniversary;
    NSString *_assistantName;
    NSString *_assistantTelephoneNumber;
    NSDate *_birthday;
    NSString *_body;
    NSString *_business2TelephoneNumber;
    NSString *_businessAddressCity;
    NSString *_businessAddressCountry;
    NSString *_businessAddressPostalCode;
    NSString *_businessAddressState;
    NSString *_businessAddressStreet;
    NSString *_businessFaxNumber;
    NSString *_businessTelephoneNumber;
    NSString *_carTelephoneNumber;
    NSArray *_categories;
    NSArray *_children;
    NSString *_companyName;
    NSString *_department;
    NSString *_email1Address;
    NSString *_email2Address;
    NSString *_email3Address;
    NSString *_fileAs;
    NSString *_firstName;
    NSString *_home2TelephoneNumber;
    NSString *_homeAddressCity;
    NSString *_homeAddressCountry;
    NSString *_homeAddressPostalCode;
    NSString *_homeAddressState;
    NSString *_homeAddressStreet;
    NSString *_homeTelephoneNumber;
    NSString *_homeFaxNumber;
    NSString *_jobTitle;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_mobileTelephoneNumber;
    NSString *_officeLocation;
    NSString *_otherAddressCity;
    NSString *_otherAddressCountry;
    NSString *_otherAddressPostalCode;
    NSString *_otherAddressState;
    NSString *_otherAddressStreet;
    NSString *_pagerNumber;
    NSString *_picture;
    NSString *_radioTelephoneNumber;
    NSString *_spouse;
    NSString *_suffix;
    NSString *_title;
    NSString *_webpage;
    NSString *_yomiCompanyName;
    NSString *_yomiFirstName;
    NSString *_yomiLastName;
    NSString *_customerID;
    NSString *_governmentID;
    NSString *_im1Address;
    NSString *_im2Address;
    NSString *_im3Address;
    NSString *_managerName;
    NSString *_companyMainPhone;
    NSString *_accountName;
    NSString *_nickName;
    NSString *_mms;
    long long _fileAsAutoConstruction;
}

@property (nonatomic, setter=setABRecord:) void *abRecord; // @synthesize abRecord=_abRecord;
@property (strong, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property (strong, nonatomic) NSDate *anniversary; // @synthesize anniversary=_anniversary;
@property (strong, nonatomic) NSString *assistantName; // @synthesize assistantName=_assistantName;
@property (strong, nonatomic) NSString *assistantTelephoneNumber; // @synthesize assistantTelephoneNumber=_assistantTelephoneNumber;
@property (strong, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property (strong, nonatomic) NSString *body; // @synthesize body=_body;
@property (nonatomic) int bodySize; // @synthesize bodySize=_bodySize;
@property (nonatomic) BOOL bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;
@property (strong, nonatomic) NSString *business2TelephoneNumber; // @synthesize business2TelephoneNumber=_business2TelephoneNumber;
@property (strong, nonatomic) NSString *businessAddressCity; // @synthesize businessAddressCity=_businessAddressCity;
@property (strong, nonatomic) NSString *businessAddressCountry; // @synthesize businessAddressCountry=_businessAddressCountry;
@property (strong, nonatomic) NSString *businessAddressPostalCode; // @synthesize businessAddressPostalCode=_businessAddressPostalCode;
@property (strong, nonatomic) NSString *businessAddressState; // @synthesize businessAddressState=_businessAddressState;
@property (strong, nonatomic) NSString *businessAddressStreet; // @synthesize businessAddressStreet=_businessAddressStreet;
@property (strong, nonatomic) NSString *businessFaxNumber; // @synthesize businessFaxNumber=_businessFaxNumber;
@property (strong, nonatomic) NSString *businessTelephoneNumber; // @synthesize businessTelephoneNumber=_businessTelephoneNumber;
@property (strong, nonatomic) NSString *carTelephoneNumber; // @synthesize carTelephoneNumber=_carTelephoneNumber;
@property (strong, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (strong, nonatomic) NSArray *children; // @synthesize children=_children;
@property (strong, nonatomic) NSString *companyMainPhone; // @synthesize companyMainPhone=_companyMainPhone;
@property (strong, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property (strong, nonatomic) NSString *customerID; // @synthesize customerID=_customerID;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSString *department; // @synthesize department=_department;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *email1Address; // @synthesize email1Address=_email1Address;
@property (strong, nonatomic) NSString *email2Address; // @synthesize email2Address=_email2Address;
@property (strong, nonatomic) NSString *email3Address; // @synthesize email3Address=_email3Address;
@property (strong, nonatomic) NSString *fileAs; // @synthesize fileAs=_fileAs;
@property (nonatomic) long long fileAsAutoConstruction; // @synthesize fileAsAutoConstruction=_fileAsAutoConstruction;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (strong, nonatomic) NSString *governmentID; // @synthesize governmentID=_governmentID;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *home2TelephoneNumber; // @synthesize home2TelephoneNumber=_home2TelephoneNumber;
@property (strong, nonatomic) NSString *homeAddressCity; // @synthesize homeAddressCity=_homeAddressCity;
@property (strong, nonatomic) NSString *homeAddressCountry; // @synthesize homeAddressCountry=_homeAddressCountry;
@property (strong, nonatomic) NSString *homeAddressPostalCode; // @synthesize homeAddressPostalCode=_homeAddressPostalCode;
@property (strong, nonatomic) NSString *homeAddressState; // @synthesize homeAddressState=_homeAddressState;
@property (strong, nonatomic) NSString *homeAddressStreet; // @synthesize homeAddressStreet=_homeAddressStreet;
@property (strong, nonatomic) NSString *homeFaxNumber; // @synthesize homeFaxNumber=_homeFaxNumber;
@property (strong, nonatomic) NSString *homeTelephoneNumber; // @synthesize homeTelephoneNumber=_homeTelephoneNumber;
@property (strong, nonatomic) NSString *im1Address; // @synthesize im1Address=_im1Address;
@property (strong, nonatomic) NSString *im2Address; // @synthesize im2Address=_im2Address;
@property (strong, nonatomic) NSString *im3Address; // @synthesize im3Address=_im3Address;
@property (strong, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSString *managerName; // @synthesize managerName=_managerName;
@property (strong, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property (strong, nonatomic) NSString *mms; // @synthesize mms=_mms;
@property (strong, nonatomic) NSString *mobileTelephoneNumber; // @synthesize mobileTelephoneNumber=_mobileTelephoneNumber;
@property (strong, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property (strong, nonatomic) NSString *officeLocation; // @synthesize officeLocation=_officeLocation;
@property (strong, nonatomic) NSString *otherAddressCity; // @synthesize otherAddressCity=_otherAddressCity;
@property (strong, nonatomic) NSString *otherAddressCountry; // @synthesize otherAddressCountry=_otherAddressCountry;
@property (strong, nonatomic) NSString *otherAddressPostalCode; // @synthesize otherAddressPostalCode=_otherAddressPostalCode;
@property (strong, nonatomic) NSString *otherAddressState; // @synthesize otherAddressState=_otherAddressState;
@property (strong, nonatomic) NSString *otherAddressStreet; // @synthesize otherAddressStreet=_otherAddressStreet;
@property (strong, nonatomic) NSString *pagerNumber; // @synthesize pagerNumber=_pagerNumber;
@property (strong, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property (strong, nonatomic) NSString *radioTelephoneNumber; // @synthesize radioTelephoneNumber=_radioTelephoneNumber;
@property (strong, nonatomic) NSString *spouse; // @synthesize spouse=_spouse;
@property (strong, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSString *webpage; // @synthesize webpage=_webpage;
@property (strong, nonatomic) NSString *yomiCompanyName; // @synthesize yomiCompanyName=_yomiCompanyName;
@property (strong, nonatomic) NSString *yomiFirstName; // @synthesize yomiFirstName=_yomiFirstName;
@property (strong, nonatomic) NSString *yomiLastName; // @synthesize yomiLastName=_yomiLastName;

+ (void)_setSystemTimeZoneForUnitTests:(id)arg1;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (id)contactWithABRecord:(void *)arg1 serverID:(id)arg2;
+ (id)externalRepClasses;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (void)_detectFileAsAutoConstruction;
- (void)_loadAttributesFromABRecord:(void *)arg1;
- (void)_reconstructFileAsField;
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2 storeExternalRep:(BOOL)arg3;
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_setDatesWithExistingRecord:(void *)arg1;
- (BOOL)_setEmailsWithExistingRecord:(void *)arg1;
- (BOOL)_setExternalRepWithExistingRecord:(void *)arg1;
- (BOOL)_setIMsWithExistingRecord:(void *)arg1;
- (void)_setImageOnContactFromPerson:(void *)arg1;
- (BOOL)_setPhoneNumbersWithExistingRecord:(void *)arg1;
- (BOOL)_setRelatedNamesWithExistingRecord:(void *)arg1;
- (BOOL)_setStreetAddressesWithExistingRecord:(void *)arg1;
- (BOOL)_setURLsWithExistingRecord:(void *)arg1;
- (id)_transformedDateForABFramework:(id)arg1;
- (id)_transformedDateForActiveSync:(id)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)bestEmailFromAppData:(int)arg1;
- (long long)dataclass;
- (void)dealloc;
- (BOOL)deleteFromAddressBook;
- (BOOL)deleteFromContainer:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithABRecord:(void *)arg1 serverID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)loadABRecord;
- (void)loadClientIDs;
- (BOOL)loadLocalItemWithAccount:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (BOOL)saveServerIDToContact;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveToAddressBookWithExistingRecord:(void *)arg1 inSource:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 storeExternalRep:(BOOL)arg5;
- (BOOL)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (void)setBodySizeNumber:(id)arg1;
- (void)setBodyTruncatedNumber:(id)arg1;
- (void)setLocalItem:(void *)arg1;

@end


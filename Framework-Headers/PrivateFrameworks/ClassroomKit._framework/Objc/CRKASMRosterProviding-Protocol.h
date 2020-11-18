//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKASMCourseCreateProperties, CRKASMCourseUpdateProperties, DMFControlGroupIdentifier, NSArray, NSSet, NSString;
@protocol CRKASMRoster, CRKASMUserDirectory, CRKASMUserFetching;

@protocol CRKASMRosterProviding <NSObject>

@property (readonly, copy, nonatomic) NSArray *locationsWithManagePermissions;
@property (readonly, nonatomic, getter=isPopulated) BOOL populated;
@property (readonly, nonatomic) id<CRKASMRoster> roster;
@property (readonly, nonatomic) id<CRKASMUserFetching> userFetcher;

- (void)createCourseWithProperties:(CRKASMCourseCreateProperties *)arg1 completion:(void (^)(NSError *))arg2;
- (BOOL)ingestCertificates:(NSSet *)arg1 forTrustedUserIdentifier:(NSString *)arg2 error:(id *)arg3;
- (id<CRKASMUserDirectory>)instructorDirectoryForLocationIDs:(NSArray *)arg1;
- (void)refresh;
- (void)removeCourseWithIdentifier:(DMFControlGroupIdentifier *)arg1 completion:(void (^)(NSError *))arg2;
- (id<CRKASMUserDirectory>)studentDirectoryForLocationIDs:(NSArray *)arg1;
- (void)updateCourseWithIdentifier:(DMFControlGroupIdentifier *)arg1 properties:(CRKASMCourseUpdateProperties *)arg2 completion:(void (^)(NSError *))arg3;
@end

//
//  TCIABPrivacyCenterViewController.h
//  TCPrivacy
//
//  Created by JeanJulien on 20/12/2019.
//  Copyright © 2019 TagCommander. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TCPopUpContentView;
@class TCPurposeContentView;
@class TCVendorContentView;
@class TCPrivacyConfiguration;
@class TCConfigurationFile;

NS_ASSUME_NONNULL_BEGIN

@interface TCIABPrivacyCenterViewController : UIViewController<UIScrollViewDelegate>

//- (void) parseCustomisation: (NSDictionary *) custo;
- (UILabel *) createLabel: (int) type withText: (NSString *) text;
- (UISwitch *) createSwitchBtn: (int) ID forPrefix: (NSString *) prefix withLegitimateInterest: (Boolean) legInt;
- (UISwitch *) createSwitchBtn: (int) ID forPrefix: (NSString *) prefix;
- (UIView *) createStackView: (int) ID;

- (IBAction) displayPurposeScreen: (id) sender;
- (IBAction) displayVendorList: (id) sender;
- (IBAction) displayVendorDetail: (id) sender;
- (IBAction) displayPurposeDetail: (id) sender;
- (IBAction) actionRefuseAll: (id) sender;
- (IBAction) actionAcceptAll: (id) sender;
- (IBAction) actionSaveExit: (id) sender;

- (void) attachFormattedConstraint: (NSString *) constraint toView: (UIView *) view;
- (void) attachConstraint: (NSString *) constraint toView: (UIView *) view;
- (void) addOurPartnersLinkToLabel: (UILabel *) label;
- (void) displayRelatedVendorsList: (int) hashId;

- (NSString *) getTranslation: (NSString *) path;
- (NSString *) getIABTranslation: (NSString *) path;

- (NSArray *) keysToDisplay: (NSString *) type;
- (NSArray *) vendorsToDisplay;

- (void) saveVendorRestriction;

@property (nonatomic, retain) NSDictionary *JSONDictionary;
@property (nonatomic, retain) TCConfigurationFile *IABConf;
@property (nonatomic, retain) TCConfigurationFile *translationConf;
@property (nonatomic, retain) NSMutableDictionary *metrics;

@property (nonatomic, retain) UIView *currentContentView;
@property (nonatomic, retain) TCPurposeContentView *purposeContentView;
@property (nonatomic, retain) TCVendorContentView *vendorContentView;
@property (nonatomic, retain) TCPopUpContentView *popupContentView;

@property (nonatomic, retain) NSMutableOrderedSet *purposes;
@property (nonatomic, retain) NSMutableOrderedSet *legitimateInterest;
@property (nonatomic, retain) NSMutableOrderedSet *specialPurposes;
@property (nonatomic, retain) NSMutableOrderedSet *features;
@property (nonatomic, retain) NSMutableOrderedSet *specialFeatures;

@property (nonatomic, retain) UISwitch *globalConsent;
@property (nonatomic, retain) NSMutableDictionary *viewsDictionary;
@property (nonatomic, retain) NSDictionary *savedConsent;
@property (nonatomic, retain) TCPrivacyConfiguration *configuration;

@property (nonatomic, retain) NSMutableDictionary *pubRestrictions;

@property (nonatomic, assign) int numberOfViews;
@property (nonatomic,assign)  int filterCategoryType;
@property (nonatomic,assign)  int filterCategoryID;

@end

NS_ASSUME_NONNULL_END

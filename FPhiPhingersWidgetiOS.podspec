#
#  Be sure to run `pod spec lint FPhiSelphIDWidgetiOSLight.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  s.name         = "FPhiPhingersWidgetiOS"
  s.version      = "1.0.3"
  s.summary      = "Phingers widget for Fingerprint detection and recognition"
  s.description  = <<-DESC
                  Phingers widget for Fingerprint detection and recognition.
                  DESC
  s.homepage     = "http://www.facephi.com"
  s.license      = {
                    :type => "Commercial", 
                    :text => <<-LICENSE
                    © Facephi 2021. All rights reserved.
                    LICENSE
                  }
  s.authors      = { "FacePhi" => "support@facephi.com" }
  
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/facephi/phingers-widget-framework.git", :tag => "#{s.version}" }

  s.requires_arc      = true
  s.static_framework  = true
  s.vendored_frameworks = 'Frameworks/*.framework'

  s.xcconfig = {
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited)'
  }

  s.pod_target_xcconfig = {
    'ENABLE_BITCODE' => 'NO',
    'OTHER_LDFLAGS' => '-lObjC'
  }

  s.dependency "OnyxCamera", "7.1.10"

end

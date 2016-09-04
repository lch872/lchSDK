Pod::Spec.new do |s|
s.name             = "lchSDK"
s.version          = "0.0.1"
s.summary          = "Personal development SDK on iOS"
s.description      = <<-DESC
                    It is a marquee view used on iOS, which implement by Objective-C.
                    DESC

s.homepage         = "https://github.com/lch872/lchSDK"

s.license          = 'MIT'
s.author           = { "lch" => "lch872@163.com" }
s.source           = { :git => "https://github.com/lch872/lchSDK.git", :tag => s.version }
# s.social_media_url = 'https://twitter.com/NAME'

s.platform     = :ios, '7.0'
# s.ios.deployment_target = '7.0'
# s.osx.deployment_target = '10.7'
s.requires_arc = true

s.source_files = 'lchSDK/*'
# s.resources = 'Assets'

# s.ios.exclude_files = 'Classes/osx'
# s.osx.exclude_files = 'Classes/ios'
# s.public_header_files = 'Classes/**/*.h'
s.frameworks = 'Foundation', 'UIKit'

end
